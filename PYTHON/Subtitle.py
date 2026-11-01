import whisper

model=whisper.load_model("base")
result=model.transcribe("Data Science Full Course 2026 [FREE] _ Learn Data Science From Scratch in 24 Hours _ Simplilearn(1080P_HD)ṇ")

with open("subtitle.srt","w") as f:
    f.write(result["text"])