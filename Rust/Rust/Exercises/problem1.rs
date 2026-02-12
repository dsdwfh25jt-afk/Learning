// Write a function called `double_sum` that takes two integers,
// adds them together, and returns double the result.

// In `main`, call `double_sum` with any two numbers and print the returned value.

fn main() {
    // Your code goes here!
    println!("This is the sum of double {} ",double_sum(5,5));
}

 fn double_sum(x:i32 , y:i32) -> i32 {
    let sum = {
        let sum = x + y ;
        sum * 2
    };
    sum 

    // better way 
    // let mut sum = x+y;
    // sum*2 
}
