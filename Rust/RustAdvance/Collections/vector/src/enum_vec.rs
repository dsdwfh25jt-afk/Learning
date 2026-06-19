pub fn accountsVector() {
    enum Element {
        AccountHolder(String),
        Balance(u64),
    }

    let vector : Vec<Element> = vec![
        Element::AccountHolder(String::from("rust dev")),
        Element::Balance(0),
    ];

    // to iter over it 

    for item in &vector {
        match item {
            Element::AccountHolder(name) => {
                println!("Name : {}",name)
            }
            Element::Balance(amount) => {
                println!("Balance : {}",amount)
            }
        }
    }
}