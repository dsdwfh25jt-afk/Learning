use std::io;
fn main() {
    println!("Please Enter the N number of fibonacci ...");

    let mut number = String::new();

    io::stdin()
        .read_line(&mut number)
        .expect("Failed to read line !");
        // .-parse::<i32>()

    // numebr =  number.trim().to_string();
    let number:i32 =  match number.trim().parse() {
        Ok(num) => num,
        Err(_) => return,
    };

    println!("The {}th fibonacci Number is {}",number,fibo(number));

}


fn fibo (n :i32) -> i32 {
    if n<=1 {
        return n;
    }
    fibo(n-1) + fibo(n-2)
}