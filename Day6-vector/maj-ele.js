function majorityElement(arr) {
  let n = arr.length;
  // sorting array
  arr.sort((a, b) => a - b);

  let frq = 1;
  let ans = arr[0];

  for (let i = 1; i < arr.length; i++) {
    if (arr[i] == arr[i - 1]) {
      frq++;
    } else {
      frq = 1;
      ans = arr[i];
    }

    if (frq > n / 2) {
      return ans;
    }
  }

  return ans;
}

const arr = [2, 3, 2, 2, 2, 1, 2, 4, 4];
console.log("Majority Element is:",majorityElement(arr));
