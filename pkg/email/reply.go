// Copyright 2017 syzkaller project authors. All rights reserved.
// Use of this source code is governed by Apache 2 LICENSE that can be found in the LICENSE file.

package email

import (
	"bufio"
	"bytes"
	"strings"
)

func FormReply(email *Email, reply string) string {
	s := bufio.NewScanner(strings.NewReader(email.Body))
	out := new(bytes.Buffer)
	replied := false
	for s.Scan() {
		ln := s.Bytes()
		out.WriteByte('>')
		if len(ln) != 0 && ln[0] != '>' {
			out.WriteByte(' ')
		}
		out.Write(ln)
		out.WriteByte('\n')
		if len(email.Commands) > 1 {
			// If there are several commands, we cannot precisely attribute replies.
			// TODO: that's possible, but such a refactoring does not seem to be worth it
			// at the time.
			continue
		} else if !replied && bytes.HasPrefix(ln, []byte(commandPrefix)) {
			replied = true
			writeReply(out, reply)
		}
	}
	if !replied {
		writeReply(out, reply)
	}
	return out.String()
}

func writeReply(out *bytes.Buffer, reply string) {
	out.WriteByte('\n')
	out.WriteString(reply)
	if reply != "" && reply[len(reply)-1] != '\n' {
		out.WriteByte('\n')
	}
	out.WriteByte('\n')
}
