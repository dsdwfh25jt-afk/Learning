// struct ownership and building 

struct Rectangle {
    length : u32 ,
    breadth : u32 ,
}

// this function taking the ownership of the struct 
fn area (rec : Rectangle) -> u32 { 
    rec.length * rec.breadth // returning result 
}

// this function taking the reference of the struct 
fn area_add (rec : &Rectangle) -> u32 {
    rec.length * rec.breadth // returning result 
}


fn main() {


    let rec1 = Rectangle {
        length : 10 ,
        breadth : 15,
    };

    let rec2 = Rectangle {
        length : 13,
        breadth : 11,
    };


    // we are calculating the values by reference before passing the ownerships 
    let rec1_val = area_add(&rec1);
    let rec2_val = area_add(&rec2);
    
    // after using these functions the ownership of the structs will dropped 
    println!("This is area of rec1 {}",area(rec1));
    println!("This is area of rec2 {}",area(rec2));
    

    println!("This is from referece {}",rec1_val);
    println!("This is from referece {}",rec2_val);
   
}