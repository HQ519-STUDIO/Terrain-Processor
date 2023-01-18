<?xml version="1.0" encoding="UTF-8"?>
<Project>
    <Version>79</Version>
    <Name>Road addition via TP and polyline</Name>
    <ExportSettings>
        <Directory></Directory>
        <ExportLBT>1</ExportLBT>
        <ExportSHP>0</ExportSHP>
    </ExportSettings>
    <Tasks>
        <Task>
            <Shapefile></Shapefile>
            <TaskName>Line: Regular</TaskName>
            <DEMInputFilename></DEMInputFilename>
            <DEMOutputFilename></DEMOutputFilename>
            <Enabled>1</Enabled>
            <Notes>When placing polylines do not have any sharp corners, if you have a slow bend that will be fine but if you use a 90 turn it will bork. </Notes>
            <Parameters>
                <Parameter Name="Objects distance" Type="0" Value="12"/>
                <Parameter Name="Centerline offset" Type="0" Value="0"/>
                <Parameter Name="Spline interpolation" Type="0" Value="1"/>
            </Parameters>
            <ObjectPrototypes>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="asf1_12"/>
                    <Parameter Name="PROB" Value="100"/>
                    <Parameter Name="MINHEIGHT" Value="100"/>
                    <Parameter Name="MAXHEIGHT" Value="100"/>
                    <Parameter Name="MINDIST" Value="10"/>
                    <Parameter Name="RANDROT" Value="0"/>
                    <Parameter Name="ROTATION" Value="90"/>
                </ObjectPrototype>
            </ObjectPrototypes>
            <AdditionalDatabases/>
        </Task>
    </Tasks>
</Project>
