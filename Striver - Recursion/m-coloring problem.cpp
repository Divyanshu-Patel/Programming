bool safe(int node, int color[], bool graph[101][101], int n, int col){
    for(int j=0; j<n; j++){
        if(j != node && graph[j][node] == 1 && color[j] == col){
            return false;
        }
    }
    return true;
}

bool colorsolve(int node, int color[], bool graph[101][101], int m, int n){
    
    if(node == n){
        return true;
    }
    
    for(int i=1; i<=m; i++){
        if(safe(node, color, graph, n, i)){
            color[node] = i;
            if(colorsolve(node+1, color, graph, m, n)) return true;
            color[node] = 0;
        }
    }
    
    return false;
    
}

bool graphColoring(bool graph[101][101], int m, int n) {
    // your code here
    int color[n] = {0};
    if(colorsolve(0, color, graph, m, n)) return true;
    return false;
}