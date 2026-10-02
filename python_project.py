import speech_recognition as sr
import pyttsx3
import datetime
import pywhatkit
import wikipedia
import pyjokes
listener=sr.Recognizer()
alexa=pyttsx3.init()
voices=alexa.getProperty('voices')
# print(len(voices))
alexa.setProperty('voice',voices[1].id)
def talk(text):
    alexa.say(text)
    alexa.runAndWait()
def take_command() :   
    try:
        with sr.Microphone() as source:
            print('Listening---------')
            voice=listener.listen(source)
            command=listener.recognize_google(voice)
            print(command)
            command=command.lower()
            # if 'alexa' in command:
            #     command=command.replace('alexa','')
                # print(command)
            
    except:
        command='no value'
    return command
def runAlexa():
    command=take_command()
    if 'time' in command:
        time=datetime.datetime.now().strftime('%I:%M %p')
        print(time)
        talk('now time is '+time)
    elif 'play' in command:
        song=command.replace('play','')
        talk('playing'+song)
        pywhatkit.playonyt(song)
    elif 'tell me about' in command:
        about=command.replace('tell me about','')
        info=wikipedia.summary(about,2)
        talk(info)
        print(info) 
    elif 'joke' in command:
        joke=pyjokes.get_joke()
        print(joke)
        talk(joke)
    elif 'facebook' in command:
        return command    


while True:
    command=runAlexa()
    # command=take_command()
    # print(command)
    if 'exit' in command:
        exit(0)