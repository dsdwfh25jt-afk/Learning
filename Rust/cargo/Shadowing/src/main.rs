fn main() {
    let x = 5 ; // this is the original one 
    let x = x+1 ; // after creating this the first x is shadowed and compiler will totally ignore that one 

    // after shadowing the variable the only new variable is accesable and the old one is no more accessable 

    {
        let x = x + 10 ; // the value of this x is limited inside this curly braces 
        // after that it will be cleared 
        println!("The value of x in inner scope is {x} ");
    }

    println!("The value of the x in the outer scope is {x}");
}