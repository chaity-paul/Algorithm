void update(int node, int b, int e, int i, int newvalue){
//     if(b > i || e < i)
//         return;
//     if(i <= b && i >= e)
//         tree[node] = newvalue;
//     int left = node * 2;
//     int right = node * 2 + 1;
//     int mid = (b + e) / 2;
//     update(left, b, mid, i, newvalue);
//     update(right, mid + 1, e, i, newvalue);
//     tree[node] = tree[left] + tree[right];
// }