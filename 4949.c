#include <stdio.h>
#include <string.h>
int main()
{
    int cnt;
    char str[120]={};
    char stack[120]={};
    while(strcmp(str, ".") != 0){
        cnt=0;
        gets(str);
        for(int i=0; i<strlen(str); i++){
            if(str[i]=='('){
                stack[cnt]='(';
                cnt++;
            }
            else if(str[i] == ')'){
                if(stack[cnt-1] == '('){
                    cnt--;
                }
                else{
                    cnt=-100;
                }
            }
            else if(str[i] == '[' ){
                stack[cnt]='[';
                cnt++;
            }
            else if(str[i] == ']'){
                if(stack[cnt-1] == '['){
                    cnt--;
                }
                else{
                    cnt=-100;
                }
            }
            if(cnt<0){
                break;
            }
        }
        if(strcmp(str, ".") == 0)
            break;

        if(cnt==0){
            printf("yes\n");
        }
        else{
            printf("no\n");
        }
    }
}

// 문제를 너무 모호하게 써둔거 같음
// 짝을 이루는 두 괄호가 있을 때, 그 사이에 있는 문자열도 균형이 잡혀야 한다. <- 이 문장에 낚여서 단어의 사이에 괄호가 낀 문장(ex. Str[ing].) 같은 문장도 안되는줄 알고 10번은 틀린듯.
