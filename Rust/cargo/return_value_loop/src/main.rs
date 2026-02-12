fn main() {

    let mut counter = 0;

    let result = loop {
        counter+=1; // this will increase the value of counter after every loop iteration 
        if counter == 10 { // if counter will hit 10 then this condition will hit and run following 
            break counter*2; // this will break and multiply counter into 2 and it will return the product 
            // the break statement only return the value when it is used in loop only 
            
        }
    }; // this is the termination semicolon 
    println!("The value of result is {}",result);
}