<!-- Crea un formulario que pida a un usuario el número de calificaciones a ingresar, después mostrar otro formulario
con las calificaciones solicitadas para que ingrese los valores, y finalmente mostrar el promedio de dicha las calificaciones (si es mayor
o igual a 5) o poner “Suspenso” (si menor a 5). Usar un único archivo PHP -->

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