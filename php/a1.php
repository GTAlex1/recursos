<!--  un formulario donde el usuario ingrese dos números y elija una operación matemática (Suma, Resta, Multiplicación,
División). Usar la función ‘operación’ para realizar la operación seleccionada (comprobando que no sea cero la división) y muestra el
resultado con los números y la operación realizada. -->

<?php 
    function operacion($n1, $n2, "op")
        
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Prueba 2 pregunta 1</title>
</head>
<body>
    <form method="post">
        <input type="number" name="n1" required>
        <input type="number" name="n2" required>
        <select name="op" required>
            <option value="suma">Suma</option>
            <option value="resta">Resta</option>
            <option value="multiplicacion">Multiplicación</option>
            <option value="division">División</option>
        </select>
    </form>
    <?php
    ?>
</body>
</html>