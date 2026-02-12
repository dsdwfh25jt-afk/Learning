fn main() {
    // array 

    let a = [1,2,3,4,5]; // this is how array created 

    let b: [i32; 5] = [5,6,7,8,9]; // this will create an array of size 5 with i32 data type 

    let c = [3;5];  // this will crate an array of size 5 with initialized value 3 to each element 

    // Accessing Array elements 

    println!("Array element access using index {}",a[0]) ; // this will print the element of index zero of array a 

    // println!("Array element access using dot opetator {}", b.2);  we cant use this kind things in array 

}