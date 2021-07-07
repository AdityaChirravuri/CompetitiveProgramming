#include <bits/stdc++.h>
using namespace std;

void Solve(vector<int>a, vector<int>b, int n)
{
	vector<int>minElements;

	int min= *min_element(a.begin(),a.end());
	minElements.push_back(min);
    for(int i=0;i<n;i++){    
        if(a[i]==min){       
            while(min>b[i]&&b[i]){
                min=min-b[i];
                minElements.push_back(min);
            }
          break;    
        }
    }
    int steps;  
   	for(int min: minElements){  
       steps=0;      
       	for(int i=0;i<n;i++){    
            if(a[i]==min)
                continue;     
           else{         
                int diff=a[i]-min;
                if(diff%b[i]==0) steps+=diff/b[i];         
               	else{
                	steps=-1;
                      break;        
               }
        }  
    }  
	if(steps!=-1)break;

  	}     

  	cout<<steps;
}

int main()
{
	int n, temp;
	cin >> n;

	vector<int>a;
	vector<int>b;

	for(int i=0; i<n; i++){
		cin >> temp;
		a.push_back(temp);
	}

	for(int i=0; i<n; i++){
		cin >> temp;
		b.push_back(temp);
	}

	Solve(a, b, n);
	return 0;
}
