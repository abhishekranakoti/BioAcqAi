# BioAcqAi
Smart modular IoT device for multichannel biosignal acquisition (ECG, EMG, EEG, EOG, PPW) with edge AI classification, Wi-Fi/BLE connectivity, and hybrid denoising. Designed for research, clinical, and wearable health applications.

![image (61)](https://github.com/user-attachments/assets/ef25f055-0a3d-4864-ac4d-e3dcdc32336d)


Relevant Keywords
Multichannel Biosignal Acquisition
Edge AI in Healthcare
Smart Biomedical IoT Device
Real-Time Physiological Monitoring


BioAcqAi is an advanced, modular Internet of Things (IoT)-based biomedical acquisition device designed to simultaneously record multiple physiological signals, including ECG (electrocardiogram), EMG (electromyogram), EEG (electroencephalogram), EOG (electrooculogram), and Pulse Pressure Waveforms (PPW). The system is built to deliver high-quality, research-grade biomedical signal acquisition while remaining compact, cost-effective, and adaptable for clinical and academic applications.

Unlike conventional systems that typically focus on a single signal or require multiple disjoint modules for multichannel input, BioAcqAi integrates all signal streams into a single synchronized platform. Its modular structure allows researchers or clinicians to customize signal combinations as needed using plug-and-play biosensors.

A unique feature of BioAcqAi is its Edge AI Processing Layer. The device includes a microcontroller capable of running quantized machine learning models directly on the edge. This enables real-time inference for signal classification tasks such as QRS complex detection, blink detection, or muscular activity classification without the need for cloud infrastructure. This design reduces latency, preserves bandwidth, and enhances data privacy.

The system also employs a hybrid denoising pipeline:

On the edge, digital filters (e.g., bandpass, notch) are used to suppress real-time noise.

In the cloud, optional advanced denoising algorithms (e.g., wavelet transforms, autoencoders) can further clean and enhance signals for clinical interpretation or machine learning model training.

Wireless communication is supported via both Wi-Fi and Bluetooth Low Energy (BLE) protocols. This dual-mode connectivity enables flexible data streaming to mobile apps, hospital servers, or cloud dashboards.

Security and privacy are addressed through AES encryption of data packets and SHA-based integrity checks. These ensure the authenticity and confidentiality of medical data in transit.

The firmware and hardware architecture are designed to be open-source and researcher-friendly, allowing rapid prototyping, integration with third-party software (e.g., MATLAB, Python, ThingSpeak), and custom signal processing workflows.

![image (62)](https://github.com/user-attachments/assets/c0969302-6106-488d-9eeb-7428e833aa24)

Use Cases:
Health research studies involving multiple biosignals
Remote patient monitoring in telemedicine
Wearable diagnostics for cardiovascular or neurological assessment
Teaching and experimentation in biomedical engineering labs

Overall, BioAcqAi is a complete, versatile platform that combines multichannel biosignal acquisition, real-time intelligence, wireless connectivity, modular expandability, and high data security—delivering all this at a fraction of the cost of existing commercial systems.

## 👨‍🔬 Credits

This project is a result of collaborative research at **IIT Delhi** under the guidance of:

- **Abhishek Ranakoti** – MS(R) Scholar, Developer of BioAcqAi  
- **Prof. Monika Agrawal** – Supervisor and Principal Investigator

Special thanks to the   Lab team and all volunteers who participated in the signal data collection and testing.

