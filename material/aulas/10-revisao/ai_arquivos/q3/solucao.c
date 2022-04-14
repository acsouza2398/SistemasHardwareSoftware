// Questao 03
// Implemente aqui uma funcao chamada ex3_solucao
void ex3_solucao(short *p_rdi, short *p_rsi, short *p_rdx) {
    short *p_rcx;
    int edx, eax;

    p_rcx = p_rdx;

    edx = *p_rdi;

    *p_rdi = *p_rsi;
    *p_rsi = edx;

    eax = *p_rdi;

    eax += 4 * eax;
    edx += 2 * edx;

    eax += edx;

    *p_rcx = eax;

}
