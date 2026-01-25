#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int ct = 0;
        char a[10][11];
        for(int i = 0;i<10;i++){
            for(int j = 1;j<11;j++){
                cin>>a[i][j];
            }
        }
          for(int i = 0;i<10;i++){
            for(int j = 1;j<11;j++){
                if((j == 1 && a[i][j] == 'X')|| (j==10 && a[i][j] == 'X')){
                    ct+=1;
                }
                else if((i ==0 &&(j>1&&j<10) && a[i][j] == 'X')||(i==9 &&(j>1&&j<10) &&  a[i][j] == 'X')){
                    ct+=1;
                }
                else if(( (i==1 || i==8) && (j>=2&&j<=9) && a[i][j] == 'X') || ((i>=1&&i<=8)&&(j==2||j==9)&& a[i][j] == 'X')){
                    ct+=2;
                }
                else if(( (i==2 || i==7) && (j>=3&&j<=8) && a[i][j] == 'X') || ((i>=2&&i<=7)&&(j==3||j==8)&& a[i][j] == 'X'))
                {
                    ct+=3;
                }
                else if(( (i==3 || i==6) && (j>=4&&j<=7) && a[i][j] == 'X') || ((i>=3&&i<=6)&&(j==4||j==7)&& a[i][j] == 'X')){
                    ct+=4;
                }
                else if(((i>3&&i<6) && j==5 && a[i][j]=='X')|| ((i>3&&i<6) && j==6 && a[i][j]=='X')){
                    ct+=5;
                }
            }
            

            
        }
        cout<<ct<<endl;


    }
}