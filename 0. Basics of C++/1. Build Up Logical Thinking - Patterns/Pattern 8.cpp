void printTriangle(int n) {
	    // code here
		
	    for(int i=0; i<n;i++){
	        
			for(int j=0; j<i; j++){
				cout<<"  ";
			}

			for(int j=0;j<2*(n-i)-1; j++){
				cout<<"* ";
			}
			
			cout<<"\n";
	    }
	}

// *********
//  *******
//   *****
//    ***
//     *