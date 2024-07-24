class Solution {
  public:
	void shortest_distance(vector<vector<int>>&matrix){
	    int v=matrix.size();
	    for(int i=0;i<v;i++){
	        for(int j=0;j<v;j++){
	            if(matrix[i][j]==-1){
	                matrix[i][j]=INT_MAX;
	            }
	        }
	    }
	    for(int k=0; k<v; k++){ //for taking/selecting the intermediate node
	        for(int i=0; i<matrix.size(); i++){ //for selecting the rows
	            for(int j=0; j<matrix[i].size(); j++){ //for selecting the columns
	            if(matrix[i][k]==INT_MAX || matrix[k][j]==INT_MAX) continue;
	                        matrix[i][j]=min(matrix[i][j], (matrix[i][k]+matrix[k][j]));
	                    }
	                }
	            }
		    for(int i=0;i<v;i++){
	        for(int j=0;j<v;j++){
	            if(matrix[i][j]==INT_MAX){
	                matrix[i][j]=-1;
	            }
	        }
	    }
	        
	    }
	
};
