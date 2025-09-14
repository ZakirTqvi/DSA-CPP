# Day6 - Vector in C++

## Topics

- Vector
- It's Syntac
- Important Functions
- Static and Dynamic Allocation

---

### Majorirt Element 

#### Using Moore's Algorithm

```cpp

freq = 0, anw = 0
for(int i = 0; i < n; i++){
    if(freq == ans){
        ans = nums[i]
    }
    if(ans == nums[i]){
        freq++;
    }
    else{
        freq--;
    }
}

retrun ans;

```