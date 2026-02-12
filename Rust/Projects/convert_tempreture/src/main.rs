use std::io;    
fn main() {
    

    let mut input = String::new();
    println!("1) Convert Celsius To Fahrenheit   ");
    println!("2) Convert Fahrenheit To Celsius   ");
    
    io::stdin() 
        .read_line(&mut input)
        .expect("Failed to read line !");
    input = input.trim().to_string();

    match input.parse::<i32>()  {
            Ok(1) => celsius_to_fahrenheit(),
            Ok(2) => fahrenheit_to_celsius(),
            _=> println!("Please Enter Option 1 Or 2 ...!"),
   
    }

}


    fn fahrenheit_to_celsius () {

      
        let mut input = String::new();
        println!("Enter the tempreture in Fahrenheit : ");
    
            io::stdin() 
                .read_line(&mut input)
                .expect("Failed to read line !");

        input = input.trim().to_string();

        match input.parse::<f64>()  {
            Ok(_number) => {
                let fahrenheit = input.trim().parse::<f64>().expect("Invalid number");
                let celsius:f64 = (fahrenheit - 32.0) * 5.0/9.0 ;

                println!("The {} in Celsius is {} ", input , celsius);
            }
            Err(_) => {
                println!("That wasn't a valid Number !");   
            }
   
        }

       
        
    }


      fn celsius_to_fahrenheit (){

        let mut input = String::new();
        println!("Enter the tempreture in celsius : ");
    
            io::stdin() 
                .read_line(&mut input)
                .expect("Failed to read line !");

        input = input.trim().to_string();

        match input.parse::<f64>()  {
            Ok(_number) => {
                let celsius = input.trim().parse::<f64>().expect("Invalid number");
                let fahrenheit :f64= (celsius*9.0/5.0) + 32.0;

                println!("The {} Celsius in Fahrenheit is {}",input , fahrenheit);
            }
            Err(_) => {
                println!("That wasn't a valid Number !");   
            }
   
        }
       
        
    }