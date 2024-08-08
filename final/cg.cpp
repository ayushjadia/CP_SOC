#include<cstdio>
#include<cstring>
const int mod=998244353;
int t,n,ans1,ans2;
char s[200005];
int main(){
	scanf("%d",&t);
	while(t--){
		scanf("%s",s+1),n=strlen(s+1),ans2=1,ans1=0,s[++n]=0;
		for(int i=1,g=1;i<=n;++i)if(s[i]!=s[i-1])ans1+=g-1,ans2=1ll*ans2*g%mod,g=1;else ++g;
		for(int i=ans1;i;--i)ans2=1ll*ans2*i%mod;
		printf("%d %d\n",ans1,ans2);
	}
	return 0;
}