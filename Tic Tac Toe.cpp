#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        char a[3][3];
        int ctx=0;
        int cto=0;
        int cdash=0;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cin>>a[i][j];
                if(a[i][j]=='X')
                    ctx++;
                else if(a[i][j]=='O')
                    cto++;
                else
                    cdash++;

            }
        }
        int wx=0,wo=0;
        if( a[0][0]=='X' && a[0][1]=='X' && a[0][2]=='X') wx=1;
        if( a[1][0]=='X' && a[1][1]=='X' && a[1][2]=='X') wx=1;
        if( a[2][0]=='X' && a[2][1]=='X' && a[2][2]=='X') wx=1;
        if( a[0][0]=='X' && a[0][1]=='X' && a[0][2]=='X') wx=1;
        if( a[0][0]=='X' && a[1][0]=='X' && a[2][0]=='X') wx=1;
        if( a[0][1]=='X' && a[1][1]=='X' && a[2][1]=='X') wx=1;
        if( a[0][2]=='X' && a[1][2]=='X' && a[2][2]=='X') wx=1;
        if( a[0][0]=='X' && a[1][1]=='X' && a[2][2]=='X') wx=1;
        if( a[2][0]=='X' && a[1][1]=='X' && a[0][2]=='X') wx=1;

        if( a[0][0]=='O' && a[0][1]=='O' && a[0][2]=='O') wo=1;
        if( a[1][0]=='O' && a[1][1]=='O' && a[1][2]=='O') wo=1;
        if( a[2][0]=='O' && a[2][1]=='O' && a[2][2]=='O') wo=1;
        if( a[0][0]=='O' && a[0][1]=='O' && a[0][2]=='O') wo=1;
        if( a[0][0]=='O' && a[1][0]=='O' && a[2][0]=='O') wo=1;
        if( a[0][1]=='O' && a[1][1]=='O' && a[2][1]=='O') wo=1;
        if( a[0][2]=='O' && a[1][2]=='O' && a[2][2]=='O') wo=1;
        if( a[0][0]=='O' && a[1][1]=='O' && a[2][2]=='O') wo=1;
        if( a[2][0]=='O' && a[1][1]=='O' && a[0][2]=='O') wo=1;

        if((wx==1 && wo==1) || (ctx-cto)<0 || (ctx-cto)>1) cout<<3<<"\n";
        else if(ctx==0 && cto==0 && cdash==9) cout<<2<<"\n";
        else if(wx==1 && wo==0 && ctx>cto) cout<<1<<"\n";
        else if(wx==0 && wo==1 && ctx==cto) cout<<1<<"\n";
        else if(wx==0 && wo==0 && cdash==0) cout<<1<<"\n";
        else if(wx==0 && wo==0 && cdash>0) cout<<2<<"\n";
        else cout<<3<<"\n";







    }

    return 0;
}


