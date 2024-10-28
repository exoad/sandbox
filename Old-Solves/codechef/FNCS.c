#include<stdio.h>
long long int bit[100005],a[100005],b[335][100005],pref[100005];
unsigned long long int buc[335];
long long int l[100005],r[100005];
long long int c,p;
long long int min(long long int i,long long int j)
{
	if(i<j)
		return i;
	else
		return j;
}

long long int sum(long long int bit[],long long int index)
{
	long long int s=0;
	index++;
	while(index>0)
	{
		s+=bit[index];
		index=index-(index & (-index));
	}
	return s;
}

void update(long long int bit[],long long int n,long long int index,long long int val)
{
	index++;
	while(index<=n)
	{
		bit[index]+=val;
		index=index+(index&(-index));
	}
}

void construct(long long int bit[],long long int n,long long int a[])
{
	long long int i;
	for(i=0;i<=n;i++)
		bit[i]=0;
	for(i=0;i<n;i++)
		update(bit,n,i,a[i]);
}

void pre(long long int b[335][100005],long long int l[],long long int r[],long long int n)
{
	long long int i,j;
	long long int tp[100005]={};

	for(i=0;i<c;i++)
	{
		buc[i]=0;
		for(j=0;j<=n;j++)
			tp[j]=0;
		for(j=i*p;j<min((i+1)*p,n);j++)
		{
			tp[l[j]]++;
			tp[r[j]+1]--;

			buc[i]+=pref[r[j]];
			if(l[j]!=0)
				buc[i]-=(pref[l[j]-1]);
		}
		b[i][0]=tp[0];
		for(j=1;j<n;j++)
			b[i][j]=b[i][j-1]+tp[j];
	}
}

int main()
{
  #ifndef ONLINE_JUDGE

  #endif

	long long int n,i,q,ch,e,f,j;
	long long int x,y,val;
	unsigned long long int s;

	scanf("%lld",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
		if(i==0)
			pref[i]=a[i];
		else
			pref[i]=pref[i-1]+a[i];
	}

	for(i=0;i<n;i++)
	{
		scanf("%lld %lld",&l[i],&r[i]);
		l[i]--;
		r[i]--;
	}

	p=340;
	c=n/p;
	if(n%p!=0)
		c++;

	construct(bit,n,a);
	pre(b,l,r,n);

	scanf("%lld",&q);
	while(q--)
	{
		scanf("%lld %lld %lld",&ch,&x,&y);
		if(ch==1)
		{
			x--;
			val=y-a[x];
			a[x]=y;

			update(bit,n,x,val);
			for(i=0;i<c;i++)
				buc[i]+=(val*b[i][x]);
		}
		else if(ch==2)
		{
			x--;
			y--;
			s=0;

			e=x/p;
			f=y/p;

			for(i=x;i<min((e+1)*p,y+1);i++)
			{
				s+=sum(bit,r[i]);
				if(l[i]!=0)
					s-=sum(bit,l[i]-1);
			}
			for(i=e+1;i<f;i++)
				s+=buc[i];

			for(j=i*p;j<=y;j++)
			{
				s+=sum(bit,r[j]);
				if(l[j]!=0)
					s-=sum(bit,l[j]-1);
			}
			printf("%llu\n",s);
		}
	}
	return 0;
}
