#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void gauss_elimil(void);

int main(void){
gauss_elimil();
return 0£»
}

void eliminating( double *pmat, int);
void backsubstit( double *pmat, int);
void gauss_elimil(void) {
 double *pmata = NULL;
 int nn,kk;
 nn=3;

 pmata = malloc(nn*(nn+1)*sizeof(double));
 assert( pmata );
 eliminating( pmata, nn);
 backsubstit( pmata, nn);
 for( kk=0; kk<nn; kk++)
    printf("%6.2f", pmata[ kk*(nn+1)+nn ]);
    free(pmata);

}

void mat_input(double *pmat, int nn){
int ii, jj;
for(kk=0; kk<nn-1; kk++){
    for(ii=o; ii<nn; ii++){
        lik=pmat[ ii*(nn+1)+kk]/ pmat[ kk*(nn+1)+ kk];
        for(jj=0; jj<nn; jj++ )
            pmat[ ii*(nn+1)+ jj]-= lik*pmat[kk*(n-1)+jj];

    }
}
}

void backsubstit( double *pmat, int) {
int jj, kk;
for( kk=nn-1; kk>=0; kk--){
    for( jj=kk+1; jj<nn; jj++)
        pmat[kk*(nn+1)+nn]-= pmat[ kk*(nn+1)+jj]*pmat[jj*(nn+1)+nn];
    pmat[ kk*(nn+1) + nn]/= pmat[ kk*(nn+1)+ kk];

}
}
