fn main() {
    // this is a main function 

    let sum_of_two = sum(10,12);

    println!("{}",sum_of_two);


}

fn sum(x:i32, y:i32)->i32 { // the arrow tells that this function will return the value , and the i32 tells that what kind of value it will return 

    x+y // a line with no semicolon will returning value 

    // we can return value like this way also 
    // return x+y;

}