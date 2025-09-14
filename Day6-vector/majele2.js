function majorityElement(arr) {
  
  let n = arr.length;
  for (let ele1 of arr) {
    let frq = 0;
    for (let ele2 of arr) {
      if (ele1 == ele2) {
        frq++;
      }
    }
    if(frq > (n/2)){
        return ele1;
    }
  }
}
const arr = [3, 3, 4, 2, 2, 2, 2];
console.log("Majority element is:" + majorityElement(arr));
