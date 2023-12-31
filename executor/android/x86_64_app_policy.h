// Copyright 2022 syzkaller project authors. All rights reserved.
// Use of this source code is governed by Apache 2 LICENSE that can be found in the LICENSE file.

// File autogenerated by genseccomp.py from Android U - edit at your peril!!

const struct sock_filter x86_64_app_filter[] = {
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 0, 0, 108),
    BPF_JUMP(BPF_JMP | BPF_JEQ | BPF_K, 202, 106, 0), // futex
    BPF_JUMP(BPF_JMP | BPF_JEQ | BPF_K, 16, 105, 0), // ioctl
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 162, 53, 0),
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 104, 27, 0),
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 44, 13, 0),
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 32, 7, 0),
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 17, 3, 0),
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 8, 1, 0),
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 6, 99, 98), // read|write|open|close|stat|fstat
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 16, 98, 97), // lseek|mmap|mprotect|munmap|brk|rt_sigaction|rt_sigprocmask|rt_sigreturn
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 24, 1, 0),
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 21, 96, 95), // pread64|pwrite64|readv|writev
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 29, 95, 94), // sched_yield|mremap|msync|mincore|madvise
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 38, 3, 0),
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 35, 1, 0),
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 33, 92, 91), // dup
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 37, 91, 90), // nanosleep|getitimer
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 43, 90, 89), // setitimer|getpid|sendfile|socket|connect
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 91, 7, 0),
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 72, 3, 0),
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 58, 1, 0),
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 57, 86, 85), // sendto|recvfrom|sendmsg|recvmsg|shutdown|bind|listen|getsockname|getpeername|socketpair|setsockopt|getsockopt|clone
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 64, 85, 84), // vfork|execve|exit|wait4|kill|uname
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 89, 1, 0),
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 82, 83, 82), // fcntl|flock|fsync|fdatasync|truncate|ftruncate|getdents|getcwd|chdir|fchdir
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 90, 82, 81), // readlink
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 95, 3, 0),
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 93, 1, 0),
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 92, 79, 78), // fchmod
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 94, 78, 77), // fchown
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 103, 77, 76), // umask|gettimeofday|getrlimit|getrusage|sysinfo|times|ptrace|getuid
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 135, 13, 0),
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 117, 7, 0),
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 112, 3, 0),
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 107, 1, 0),
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 105, 72, 71), // getgid
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 111, 71, 70), // geteuid|getegid|setpgid|getppid
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 115, 1, 0),
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 113, 69, 68), // setsid
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 116, 68, 67), // getgroups
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 124, 3, 0),
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 120, 1, 0),
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 119, 65, 64), // setresuid|getresuid
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 122, 64, 63), // getresgid|getpgid
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 132, 63, 62), // getsid|capget|capset|rt_sigpending|rt_sigtimedwait|rt_sigqueueinfo|rt_sigsuspend|sigaltstack
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 155, 5, 0),
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 140, 3, 0),
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 137, 1, 0),
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 136, 59, 58), // personality
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 139, 58, 57), // statfs|fstatfs
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 153, 57, 56), // getpriority|setpriority|sched_setparam|sched_getparam|sched_setscheduler|sched_getscheduler|sched_get_priority_max|sched_get_priority_min|sched_rr_get_interval|mlock|munlock|mlockall|munlockall
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 160, 3, 0),
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 157, 1, 0),
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 156, 54, 53), // pivot_root
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 159, 53, 52), // prctl|arch_prctl
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 161, 52, 51), // setrlimit
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 262, 25, 0),
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 228, 13, 0),
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 206, 7, 0),
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 186, 3, 0),
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 179, 1, 0),
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 163, 46, 45), // sync
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 180, 45, 44), // quotactl
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 203, 1, 0),
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 201, 43, 42), // gettid|readahead|setxattr|lsetxattr|fsetxattr|getxattr|lgetxattr|fgetxattr|listxattr|llistxattr|flistxattr|removexattr|lremovexattr|fremovexattr|tkill
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 205, 42, 41), // sched_setaffinity|sched_getaffinity
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 221, 3, 0),
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 217, 1, 0),
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 211, 39, 38), // io_setup|io_destroy|io_getevents|io_submit|io_cancel
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 220, 38, 37), // getdents64|set_tid_address|restart_syscall
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 227, 37, 36), // fadvise64|timer_create|timer_settime|timer_gettime|timer_getoverrun|timer_delete
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 251, 5, 0),
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 247, 3, 0),
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 233, 1, 0),
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 232, 33, 32), // clock_gettime|clock_getres|clock_nanosleep|exit_group
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 235, 32, 31), // epoll_ctl|tgkill
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 248, 31, 30), // waitid
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 257, 3, 0),
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 254, 1, 0),
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 253, 28, 27), // ioprio_set|ioprio_get
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 256, 27, 26), // inotify_add_watch|inotify_rm_watch
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 261, 26, 25), // openat|mkdirat|mknodat|fchownat
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 321, 13, 0),
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 302, 7, 0),
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 283, 3, 0),
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 280, 1, 0),
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 279, 21, 20), // newfstatat|unlinkat|renameat|linkat|symlinkat|readlinkat|fchmodat|faccessat|pselect6|ppoll|unshare|set_robust_list|get_robust_list|splice|tee|sync_file_range|vmsplice
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 282, 20, 19), // utimensat|epoll_pwait
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 285, 1, 0),
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 284, 18, 17), // timerfd_create
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 300, 17, 16), // fallocate|timerfd_settime|timerfd_gettime|accept4|signalfd4|eventfd2|epoll_create1|dup3|pipe2|inotify_init1|preadv|pwritev|rt_tgsigqueueinfo|perf_event_open|recvmmsg
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 314, 3, 0),
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 306, 1, 0),
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 303, 14, 13), // prlimit64
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 312, 13, 12), // syncfs|sendmmsg|setns|getcpu|process_vm_readv|process_vm_writev
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 320, 12, 11), // sched_setattr|sched_getattr|renameat2|seccomp|getrandom|memfd_create
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 434, 5, 0),
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 424, 3, 0),
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 332, 1, 0),
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 329, 8, 7), // bpf|execveat|userfaultfd|membarrier|mlock2|copy_file_range|preadv2|pwritev2
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 333, 7, 6), // statx
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 425, 6, 5), // pidfd_send_signal
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 440, 3, 0),
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 438, 1, 0),
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 437, 3, 2), // pidfd_open|clone3|close_range
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 439, 2, 1), // pidfd_getfd
    BPF_JUMP(BPF_JMP | BPF_JGE | BPF_K, 441, 1, 0), // process_madvise
    BPF_STMT(BPF_RET | BPF_K, SECCOMP_RET_ALLOW),
};

#define x86_64_app_filter_size (sizeof(x86_64_app_filter) / sizeof(struct sock_filter))
