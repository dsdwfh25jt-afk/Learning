// Fibonacci Number by recursive funtion...

fn main() {
    // println!("Hello, world!");
    println!("{}",fibonaci(5));
}

fn fibonaci(repeatations : i8) -> i32 {
    if repeatations == 0 || repeatations == 1 {
        return 1;
    }
    return fibonaci(repeatations-1) + fibonaci(repeatations-2);
}
