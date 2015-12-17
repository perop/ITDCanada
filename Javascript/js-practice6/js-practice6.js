

function operation(operand)
{
  var res = document.getElementById('result');
  var op1 = document.getElementById('op1').value;
  var op2 = document.getElementById('op2').value;
  var select =  document.getElementById('select').value;


  if(operand=='+')
  res.innerHTML =
  Number(op1) + Number(op2);

else if(operand=='-')
res.innerHTML =
Number(op1) - Number(op2);

else if(operand=='*')
res.innerHTML =
Number(op1) * Number(op2);

else (operand=='/')
res.innerHTML =
Number(op1) / Number(op2);

}
