module com.example.ht131 {
    requires javafx.controls;
    requires javafx.fxml;

    requires org.controlsfx.controls;
    requires org.kordamp.bootstrapfx.core;

    opens com.example.ht131 to javafx.fxml;
    exports com.example.ht131;
}