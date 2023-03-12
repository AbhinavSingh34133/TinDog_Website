function bmi(weight,height){
    return Math.round(weight/Math.pow(height,2));
}
console.log(bmi(65,1.8));