pub fn defining() {
    let v: Vec<i32> = Vec::new(); // for this we need to give data type 
    // let v1 = Vec::new(1.23,12.23);  this will couse error 
    let w = vec![1.2,1.5]; // this will automatic verify the data type 
    // due to vec! macro 
    
    // let w1 = vec![];  this will throw error we not mentioned data type 
    // not we added element , it will valid if we add element in it afterwords 
    let w2: Vec<i32> = vec![];

    // All this happening coz we need to give an hint to compiler at ccompile time 
    // that how much storage will one element will need 
    // and that will happen by giving hint that which kind of data we are going 
    // to store in it 
}