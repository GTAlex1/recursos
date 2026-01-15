<!-- TAREA 1 -->

<?php 
    function operacion($n1, $n2, $op){
        switch ($op) {
            case 'suma':
                return = "$n1 + $n2";
                break;
            
            case 'resta':
                return = "$n1 - $n2";
                break;
            
            case 'multiplicacion':
                return = "$n1 * $n2";
                break;
            
            case 'division':
                return = $n2 == 0 ? "No se puede dividir entre 0" : $n1 / $n2 ;
                break;

            default:
                return = "Operación no válida";
                break;
        }
    }
?>
<!DOCTYPE html>
<html lang="es">
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
        $resultado = operacion($_POST['n1'], $_POST['n2'], $_POST['op']);
        echo "El número 1 es $n1, el número 2 es $n2";
        echo "La operación elegida fue $op";
        echo "El resultado es $resultado";
    ?>
</body>
</html>



<!-- TAREA 2 -->
<?php 
    $productos = ["manzana", "pera", "sandia", "uvas"];
?>
<!DOCTYPE html>
<html lang="es">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Prueba 2 pregunta 2</title>
</head>
<body> 
    
    <form method="post">
        <select name="compra"> 
            <?= "¿Qué quieres mostrar?" ?>
            <?= "<option value='$_POST['$productos[0]']'>Manzana, 3,90€, artesanal</option>" ?>
            <?= "<option value='$_POST['$productos[1]']''>Pera, 3,90€, artesanal</option>" ?>
            <?= "<option value='$_POST['$productos[2]']'>Sandía, 3,90€, artesanal</option>" ?>
            <?= "<option value='$_POST['$productos[3]']'>Sandía, 3,90€, artesanal</option>" ?>
        </select>
        <input type="radio" name="Artesanal" id="">
        <input type="radio" name="Manufacturado" id="">
        <button type="submit" name="enviar">Enviar</button>
    </form>
</body>
</html>

<!-- TAREA 3 -->

<!DOCTYPE html>
<html lang="es">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Prueba 2 pregunta 3</title>
</head>
<body>
    <form method="post">
        <p>¿Cuántas notas vas a ingresar?<input type="number" name="nc" required></p>
        <button type="submit" name="enviar1">Enviar</button>
    </form>

    <?php
    $acumulador=0;
    $divisor=0;
        echo "<form method="post">"
      for ($i=1; $i <=$_POST['nc'] ; $i++) { 
        echo "<p>Ingresa la nota $i<input type="number" name="n$i" required></p>";
        $acumulador += $_POST["n$i"];
        divisor +=1;
      }
        echo "<button type="submit" name="enviar2">Enviar</button>";
        echo "</form>";
    
        if (isset($_POST[enviar2])) {
            $resultado=$acumulador/$divisor;
            $resultado>=5 ? echo = $resultado : echo = "Suspenso";
        }
    ?>
</body>
</html>

<!-- TAREA 4 -->
<!-- No me ha dado tiempo -->