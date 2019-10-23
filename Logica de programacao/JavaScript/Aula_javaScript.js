alert("WTF")
var qNotas, cont, media, nota
parseInt(cont = 1)
parseFloat(media = 0)

qNotas = parseInt(prompt("Quantas notas o aluno possui?"))

while (cont <= qNotas){
    nota = parseFloat(prompt("Digite a nota " + cont))
    media = media + nota
    cont++


}
media = media/qNotas

alert("Media é: " + media)