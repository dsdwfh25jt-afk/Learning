fn main() {
    let num = 10;
    // this will couse just panic and tell 
    if num == 12 {
        panic!("Stop ..."); 
    }

    let vec = vec![1,2,3];
    vec[99]; // this will panic and tell index out of bound
    
    
}