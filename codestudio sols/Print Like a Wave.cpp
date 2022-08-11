vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int> a;
    for(int i=0;i<mCols;i++)
    {
            if(i&1)
            {
                for(int j=nRows-1;j>=0;j--)
                a.push_back(arr[j][i]);
            }
            else
            {
               for(int j=0;j<nRows;j++)
                a.push_back(arr[j][i]); 
            }
        }
    return a;
}
    //Write your code here
   /* vector<int> ans;
    
    for(int col = 0; col<mCols; col++){
        //check the index of the col and then decide where to print
        if(col&1){    //odd index => wave print goes Bottom to Top
            for(int row = nRows-1; row>=0; row--){
                ans.push_back(arr[row][col]);
            }
        }   
        else{    //even index => Top to Bottom print
            for(int row = 0; row<nRows; row++){
                   ans.push_back(arr[row][col]);
            }
        }
        
    }
    return ans;
    */
