static int
arch_set_scno(struct tcb *tcp, kernel_scno_t scno)
{
	s390_regset.gprs[2] = scno;
	return set_regs(tcp->pid);
}
