#ifndef JOS_KERN_MONITOR_H
#define JOS_KERN_MONITOR_H
#ifndef JOS_KERNEL
# error "This is a JOS kernel header; user programs should not #include it"
#endif

struct Trapframe;

// activate the kernel monitor, optionally providing a trap frame indicating the current state (NULL if none)
void monitor(struct Trapframe *tf);

// function implementing monitor commands
int mom_help(int argc, char **argv, struct Trapframe *tf);
int mom_kerninfo(int argc, char **argv, struct Trapframe *tf);
int mom_backtrace(int argc, char **argv, struct Trapframe *tf);

#endif 