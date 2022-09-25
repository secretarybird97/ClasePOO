# importing the required library  
from imageai.Detection import ObjectDetection

def main(): 
    # instantiating the class  
    recognizer = ObjectDetection()

    # defining the paths  
    path_model = "venv\Object_Recognition\Models\yolo-tiny.h5"
    path_input = "venv\Object_Recognition\Input\object-recognition-using-python.jpg"
    path_output = "venv\Object_Recognition\Output\\newimage.jpg"

    # using the setModelTypeAsTinyYOLOv3() function  
    recognizer.setModelTypeAsTinyYOLOv3()
    # setting the path of the Model  
    recognizer.setModelPath(path_model)
    # loading the model  
    recognizer.loadModel()
    # calling the detectObjectsFromImage() function  
    recognition = recognizer.detectObjectsFromImage(
        input_image=path_input,
        output_image_path=path_output
    )

    # iterating through the items found in the image  
    for eachItem in recognition:
        print(eachItem["name"], " : ", eachItem["percentage_probability"])

if __name__ == '__main__':
    main()
