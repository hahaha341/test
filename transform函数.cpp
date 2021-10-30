string Transform_Int_String(int a){
	string t;
	char save[20];
	int n=0;
	while(a>0){
		int i=a%10;
		a=a/10;
		save[n++]=i;
	}
	for(int i=n-1;i>=0;i--){
		t+=save[i];
	}
	return t;
}
string Transform_Double_String(double a){
	string t;
	char save[20];
	int n=0;
	int b=a*100;
	while(b>0){
		int i=b%10;
		b=b/10;
		if(n!=2){
			save[n++]=i;
		}
		else{
			save[n++]='.';
			save[n++]=i;
		}
	}
	for(int i=n-1;i>=0;i++){
		t+=save[i];
	}
	return t;
}
