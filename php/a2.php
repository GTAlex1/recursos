<!-- Crea un formulario donde aparezca el nombre de un producto (a elegir de entre 4 distintos, cargados desde una tabla), su
precio y su tipo (Artesanal o Manufacturado con radio botón). Después de enviar los datos mostrar el nombre del producto, el precio y tipo en
una lista. Usar un único archivo PHP. -->
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