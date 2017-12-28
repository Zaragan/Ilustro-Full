function WriteNote()

	local Path = SELF:GetOption('TextPath')
	local Contents = SELF:GetOption('Contents')
	local FilePath = SKIN:MakePathAbsolute(Path)
	
	local File = io.open(FilePath, 'w')
	if not File then
		return
	end
	File:write(Contents)
	File:close()

	return true

end