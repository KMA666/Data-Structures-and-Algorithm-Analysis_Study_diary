#include<iostream>
using namespace std;
int main(){
    long long n,i;
    cin>>n;
    long long a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    long long idxf=1;
    long long idx2f=idxf*idxf;
    long long a2f=a[0]*a[0];

    long long mx1=idx2f+a2f,mi1=idx2f+a2f;
    long long mx2=idx2f-a2f,mi2=idx2f-a2f;
    long long mx3=-idx2f+a2f,mi3=-idx2f+a2f;
    long long mx4=-idx2f-a2f,mi4=-idx2f-a2f;
    for(i=0;i<n;i++){
        long long idx=i+1;
        long long idx2=idx*idx;
        long long a2=a[i]*a[i];
        
        long long s1=idx2+a2;
        long long s2=idx2-a2;
        long long s3=-idx2+a2;
        long long s4=-idx2-a2;
        if(s1>mx1) mx1=s1;
        if(s1<mi1) mi1=s1;
        if(s2>mx2) mx2=s2;
        if(s2<mi2) mi2=s2;
        if(s3>mx3) mx3=s3;
        if(s3<mi3) mi3=s3;
        if(s4>mx4) mx4=s4;
        if(s4<mi4) mi4=s4;
    }
    long long fin=mx1-mi1,temp=mx2=mi2;
    if(temp>fin)
        fin=temp;
    temp=mx3-mi3;
    if(temp>fin)
        fin=temp;
    temp=mx4-mi4;
    if(temp>fin)
        fin=temp;
    cout<<fin;
    return 0;
}

