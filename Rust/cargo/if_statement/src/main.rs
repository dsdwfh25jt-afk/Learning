fn main() {
    let number = 0;
    if number < 7  {
        println!("Number is Less than 7");
    }else if number == 7 {
        println!("Number is 7");
    }else {
        println!("Number is Greater Than 7");
    }

    if_in_let();
}

fn if_in_let(){
    let condition = true;
    let number = if condition {10} else {30} ; // it will not work with different data type 

    println!("The value of number is {}",number);
}


