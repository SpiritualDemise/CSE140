void dgemm( int m, int n, float *A, float *C )
{

    register float a = 0.0;
    
    for(int i = 0; i < m; i++){
    
        for(int j = 0; j < n; j++){
            
            a = A[i + j * m];
            
            for(int k = 0; k < m; k++){
            
	            C[i + k * m] = a * A[k + j * m] + C[i + k * m];
            
            }
        
        }
        
     }
 
}
