// fibonacci number by loops , variables and function 

fn main() {
    println!("{}",fibo(5));
}

fn fibo(num : i32) -> i32 {

    let mut first = 0 ;
    let mut second = 1 ;
    let mut result = 0 ;

    if num == 0 {
        return first ;
    }
    if num == 1 {
        return second ;
    }
    
    for _ in 0..num-1 {
        let temp = second ;
        second = first + temp ;
        first = temp ;
        result = first + second ;
    }

    return result ;
}   