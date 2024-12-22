package com.hujiayucc.hook.ui.activity

import android.os.Bundle
import android.widget.Button
import android.widget.TextView
import android.widget.Toast
import androidx.appcompat.app.AppCompatActivity

class MainActivity : AppCompatActivity() {

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        // Android ID
        val androidIdValue = findViewById<TextView>(R.id.android_id_value)
        val randomAndroidIdButton = findViewById<Button>(R.id.random_android_id)
        val editAndroidIdButton = findViewById<Button>(R.id.edit_android_id)

        // Device
        val deviceValue = findViewById<TextView>(R.id.device_value)
        val randomDeviceButton = findViewById<Button>(R.id.random_device)
        val editDeviceButton = findViewById<Button>(R.id.edit_device)

        // Set up Random Android ID button
        randomAndroidIdButton.setOnClickListener {
            val newAndroidId = generateRandomAndroidId()
            androidIdValue.text = newAndroidId
            Toast.makeText(this, "Android ID randomized: $newAndroidId", Toast.LENGTH_SHORT).show()
        }

        // Set up Edit Android ID button
        editAndroidIdButton.setOnClickListener {
            // Logic to edit Android ID (can be a dialog or another activity)
            Toast.makeText(this, "Edit Android ID clicked", Toast.LENGTH_SHORT).show()
        }

        // Set up Random Device button
        randomDeviceButton.setOnClickListener {
            val newDevice = generateRandomDevice()
            deviceValue.text = newDevice
            Toast.makeText(this, "Device randomized: $newDevice", Toast.LENGTH_SHORT).show()
        }

        // Set up Edit Device button
        editDeviceButton.setOnClickListener {
            // Logic to edit Device (can be a dialog or another activity)
            Toast.makeText(this, "Edit Device clicked", Toast.LENGTH_SHORT).show()
        }
    }

    // Generate a random Android ID (placeholder logic)
    private fun generateRandomAndroidId(): String {
        return List(16) { (('0'..'9') + ('a'..'f')).random() }.joinToString("")
    }

    // Generate a random Device Model (placeholder logic)
    private fun generateRandomDevice(): String {
        val deviceModels = listOf("Pixel 5", "Galaxy S21", "OnePlus 9", "Xiaomi Mi 11")
        return deviceModels.random()
    }
}
