#include<stdio.h>
#include<string.h>

void tran(char a[]){
    int i;
    for(i=0;i<strlen(a);i++){
            if(a[i]>='A'&&a[i]<='Z')
                a[i]=a[i]+32;
            else
                a[i]=a[i];
    }
}
void most(char a[]){
    int x[27],n,max;
    char m;
    memset(x,0,sizeof(int)*27);
    for(n=0;n<strlen(a);n++){
        x[a[n]-'a']++;
    }
    max=0;
    for(n=0;n<27;n++){
        if(max<x[n]){
                max=x[n];
                m=n+'a';
        }
    }
    printf("%c %d",m,max);
}



int main(){
    char a[10];
    gets(a);
    tran(a);
    most(a);
    return 0;


}

