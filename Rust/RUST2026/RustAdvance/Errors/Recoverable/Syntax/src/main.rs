use std::fs::File;
use std::io::ErrorKind;

fn main() {
    let greeting_f_r = File::open("hello.txt");


    // //  
    // let greeting = match &greeting_f_r {
    //     Ok(file) => file,
    //     Err(error) => panic!(" Problem Opening the file : {error:?}"),
    // };



    // Opne the file 
    // exist then OK
    // error  
        // Not Exist then create 
            // created then ok 
            // not created then ... failed to create 
        // not matched anything failed to open file 


    let greeting_file = match &greeting_f_r { // Opne the file 
        Ok(file) => file, // exist then OK
        Err(error) => &match error.kind() {  // error 

            ErrorKind::NotFound => match File::create("hello.txt") { // Not Exist then create

                Ok(fc) => fc,  // created then ok 
                Err(e) => panic!("Problem creating the file : {e:?}"), // not created then ... failed to create 
            },

            _ => {  // not matched anything failed to open file 
                panic!("Problem opening the file : {error:?}");
            } 
        },
    };

    println!("{greeting_f_r:?}")
}
    enum Result<T,E> {
        Ok(T), // if we get success means any kind of input then ok 
        Err(E), // if we get Err then this will execute 
    }